#pragma once
#ifndef Signature_h
#define Signature_h

#include <vector>

/**
* Génere la paire de clé (clé privée, clé publique)
*/
std::vector<string> generate();


/**
* Génere la signature relative à une transaction et une clé privé afin depouvoir authentifier la transacrtion effectué par
* le detenteur de la clé privé.
* data représente un array d'octets à signer et privKey la clée privée.
*/
std::string sign(const std::vector<std::uint8_t>& data, std::string privKey);


/**
* Permet de vérifier la véracité de la signature.
* Grace à la clé publique, on pourra s'assurer que la transaction effectué est bien valide et à été émise par telle
* personne.
* data représente l'array d'octets associés à la signature et pubKey la clée publique du signataire.
*/
bool verify(const std::vector<std::uint8_t>& data, std::string signature, std::string pubKey);


#endif
