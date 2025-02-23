#include "afronet-secure.h"
AfronetSecure::AfronetSecure() {
  malwareDetector = new MalwareDetector();
  phishingProtector = new PhishingProtector();
  contentFilter = new ContentFilter();
  passwordManager = new PasswordManager();
  encryptor = new Encryptor();
}

bool AfronetSecure::detectMalware(const std::string& script) {
  return malwareDetector->detect(script);
}

bool AfronetSecure::protectAgainstPhishing(const std::string& url) {
  return phishingProtector->protect(url);
}

std::string AfronetSecure::filterContent(const std::string& content) {
  return contentFilter->filter(content);
}

std::string AfronetSecure::generatePassword() {
  return passwordManager->generatePassword();
}

std::string AfronetSecure::encryptData(const std::string& data) {
  return encryptor->encrypt(data);
}
