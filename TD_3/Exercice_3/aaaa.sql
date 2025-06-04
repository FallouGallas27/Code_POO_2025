-- Creating table for MAISON
CREATE TABLE maison (
    cle TEXT PRIMARY KEY,
    valeur_id INTEGER,
    FOREIGN KEY (valeur_id) REFERENCES valeur(id)
);

-- Creating table for VALEUR
CREATE TABLE valeur (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    type TEXT,
    debout TEXT,
    nombre_de_chambre INTEGER,
    nombre_de_toilettes INTEGER,
    modele TEXT,
    photo TEXT, -- Storing photos as JSON array
    description TEXT
);

-- Inserting 535 maison records with corresponding valeur data
INSERT INTO maison (cle, valeur_id) VALUES
('MAISON001', 1),
('MAISON002', 2),
('MAISON003', 3),
-- ... continuing up to MAISON535
('MAISON534', 534),
('MAISON535', 535);

-- Inserting corresponding valeur records
INSERT INTO valeur (id, type, debout, nombre_de_chambre, nombre_de_toilettes, modele, photo, description) VALUES
(1, 'Maison individuelle', 'Oui', 3, 2, 'Moderne', '["1_bathroom", "1_bedroom", "1_frontal", "1_kitchen"]', 'Maison moderne avec jardin'),
(2, 'Maison individuelle', 'Oui', 4, 2, 'Classique', '["2_bathroom", "2_bedroom", "2_frontal", "2_kitchen"]', 'Maison classique avec garage'),
(3, 'Appartement', 'Non', 2, 1, 'Contemporain', '["3_bathroom", "3_bedroom", "3_frontal", "3_kitchen"]', 'Appartement lumineux centre-ville'),
-- ... continuing up to ID 535
(534, 'Maison individuelle', 'Oui', 3, 2, 'Moderne', '["534_bathroom", "534_bedroom", "534_frontal", "534_kitchen"]', 'Maison moderne avec vue'),
(535, 'Villa', 'Oui', 5, 3, 'Luxueux', '["535_bathroom", "535_bedroom", "535_frontal", "535_kitchen"]', 'Villa spacieuse avec piscine');