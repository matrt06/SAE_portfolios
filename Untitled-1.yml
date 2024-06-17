    +---------------------+       +---------------------+       +---------------------+
    | Utilisateurs        |       | Programmes          |       | MotsCles             |
    +---------------------+       +---------------------+       +---------------------+
    | id_utilisateur (PK) |       | id_programme (PK)   |       | id_mot_cle (PK)     |
    | nom_utilisateur     |       | nom_programme       |       | nom_mot_cle         |
    | mot_de_passe        |       +---------------------+       +---------------------+
    | access              |                                     
    +---------------------+                                      
          |                                     
          | Associer (1-N) Utilisateurs à (1-N) Associations
          v                                     
    +---------------------+                                      
    | Associations        |                                      
    +---------------------+                                      
    | id_association (PK) |                                      
    | id_bonne_pratique   |                                     
    | id_programme        |  Associer (1-N) Associations à (1-N) BonnesPratiques   
    | id_mot_cle          |  Associer (1-N) Associations à (1-N) MotsCles
    +---------------------+                                       
          |                                                       
          | Associer (N-M) Associations à (1-N) Programmes         
          v                                                       
    +---------------------+                                       
    | BonnesPratiques     |                                       
    +---------------------+                                       
    | id_bonne_pratique (PK)| Associer (1-N) BonnesPratiques à (1-N) Associations
    | id_programme        | Associer (1-N) BonnesPratiques à (1-N) Programmes
    | phase               |                                      
    | id_mot_cle          | Associer (1-N) BonnesPratiques à (1-N) MotsCles
    +---------------------+                                       
