#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"
#include "Hotel.h"

void test_criacao_espacos() {
	Sala sl1(true, true);
	Sala sl2(false,false);
	Simples s1("frente");
	Simples s2("traseiras");
	Duplo d1("frente");
	Duplo d2("traseiras");
	Duplo d3("traseiras");

	ASSERT_EQUAL("frente", s1.get_location());
	ASSERT_EQUAL("frente", d1.get_location());
	ASSERT_EQUAL("traseiras", s2.get_location());
	ASSERT_EQUAL("traseiras", d2.get_location());
	ASSERT_EQUAL(0, s1.get_base_price());
	ASSERT_EQUAL(0, s1.get_cost());
	ASSERT_EQUAL(0, d1.get_base_price());
	ASSERT_EQUAL(0, d1.get_cost());
	ASSERT_EQUAL(1, s1.get_id());
	ASSERT_EQUAL(1, d1.get_id());
	ASSERT_EQUAL(2, s2.get_id());
	ASSERT_EQUAL(2, d2.get_id());
	ASSERT_EQUAL(3, d3.get_id());
	ASSERT_EQUAL(1, sl1.get_id());
	ASSERT_EQUAL(2, sl2.get_id());
	ASSERT_EQUAL(true, sl1.get_audio());
	ASSERT_EQUAL(false, sl2.get_video());
}

void test_hote_e_espacos() {
	Hotel h;
	Simples s3("frente");
	Simples s4("traseiras");
	Duplo d4("frente");
	Duplo d5("traseiras");
	Duplo d6("traseiras");
	Sala sl1(true, true);
	Sala sl2(false, false);
	Sala sl3(true, false);
	h.set_simples_base_price(300);
	h.set_duplo_base_price(350);
	h.set_sala_base_price(500);
	h.set_quarto_frente_taxa(0.05);
	h.set_quarto_tras_taxa(0.02);
	h.set_sala_video_taxa(0.5);
	h.set_sala_audio_taxa(0.3);
	h.add_quarto(&s3);
	h.add_quarto(&s4);
	h.add_quarto(&d4);
	h.add_quarto(&d5);
	h.add_quarto(&d6);
	h.add_sala(&sl1);
	h.add_sala(&sl2);
	h.add_sala(&sl3);


	h.update_quartos_taxa();
	ASSERT_EQUAL(5, h.get_quartos().size());
	ASSERT_EQUAL((float)0.05, (float)h.get_quartos()[0]->get_taxa());
	ASSERT_EQUAL((float)0.02, (float)h.get_quartos()[1]->get_taxa());
	ASSERT_EQUAL(315, h.get_quartos()[0]->get_cost());
	ASSERT_EQUAL(306, h.get_quartos()[1]->get_cost());
	ASSERT_EQUAL(367.5, h.get_quartos()[2]->get_cost());
	ASSERT_EQUAL(357, h.get_quartos()[3]->get_cost());

	h.update_salas_taxas();
	ASSERT_EQUAL(3, h.get_salas().size());
	ASSERT_EQUAL((float)0.3, (float)h.get_salas()[0]->get_taxa_audio());
	ASSERT_EQUAL((float)0, (float)h.get_salas()[1]->get_taxa_audio());
	ASSERT_EQUAL((float)0.5, (float)h.get_salas()[2]->get_taxa_video());
	ASSERT_EQUAL(900, h.get_salas()[0]->get_cost());
	ASSERT_EQUAL(500, h.get_salas()[1]->get_cost());
	ASSERT_EQUAL(750, h.get_salas()[2]->get_cost());
	//as funçoes trabalham individualmente para os quartos e para sala
	//desta maneira:

}

void runSuite() {
	cute::suite s;
	//TODO add your test here
	s.push_back(CUTE(test_criacao_espacos));
	s.push_back(CUTE(test_hote_e_espacos));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "The Suite");
}

int main() {
	runSuite();
	return 0;
}

