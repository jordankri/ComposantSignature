#pragma once
#ifndef Signature_h
#define Signature_h

#include <vector>

/**
* G�nere la signature relative � une transaction et une cl� priv� afin depouvoir authentifier la transacrtion effectu� par
* le detenteur de la cl� priv�.
* data repr�sente un array d'octets � signer et privKey la cl�e priv�e.
*/
std::string sign(const std::vector<std::uint8_t>& data, std::string privKey);


/**
* Permet de v�rifier la v�racit� de la signature.
* Grace � la cl� publique, on pourra s'assurer que la transaction effectu� est bien valide et � �t� �mise par telle
* personne.
* data repr�sente l'array d'octets associ�s � la signature et pubKey la cl�e publique du signataire.
*/
bool verify(const std::vector<std::uint8_t>& data, std::string signature, std::string pubKey);


#endif
