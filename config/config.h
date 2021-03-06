#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class  Config{
    private:
        Config();
        std::string _host;
        std::string _port;
        std::string _username;
        std::string _password;
        std::string _database;

    public:
        static Config& get();

        std::string& port();
        std::string& host();
        std::string& username();
        std::string& password();
        std::string& database();

        const std::string& get_port() const ;
        const std::string& get_host() const ;
        const std::string& get_username() const ;
        const std::string& get_password() const ;
        const std::string& get_database() const ;
};

#endif