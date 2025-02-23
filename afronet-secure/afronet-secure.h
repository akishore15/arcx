#ifndef AFRONET_SECURE_H
#define AFRONET_SECURE_H

#include <string>
#include <vector>

class MalwareDetector {
public:
    bool detect(const std::string& script);
};

class PhishingProtector {
public:
    bool protect(const std::string& url);
};

class ContentFilter {
public:
    std::string filter(const std::string& content);
};

class PasswordManager {
public:
    std::string generatePassword();
};

class Encryptor {
public:
    std::string encrypt(const std::string& data);
};

class AfronetSecure {
public:
    AfronetSecure();
    ~AfronetSecure();

    bool detectMalware(const std::string& script);
    bool protectAgainstPhishing(const std::string& url);
    std::string filterContent(const std::string& content);
    std::string generatePassword();
    std::string encryptData(const std::string& data);

private:
    MalwareDetector* malwareDetector;
    PhishingProtector* phishingProtector;
    ContentFilter* contentFilter;
    PasswordManager* passwordManager;
    Encryptor* encryptor;
};

#endif  // AFRONET_SECURE_H
