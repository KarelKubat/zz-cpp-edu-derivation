all: composition derivation

derivation: derivation.cc
	$(CXX) -g -Wall -o $@ $<

composition: composition.cc
	$(CXX) -g -Wall -o $@ $<

clean:
	rm -f composition derivation

