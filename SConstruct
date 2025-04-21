import os
from SCons.Script import Default, Environment

# Initialiser l'environnement de build
env = Environment()

# Définir les variables d'environnement
env.Append(CPPPATH=[
    '#applications_user/smart_portail_tool',
    # Ajoutez d'autres répertoires si nécessaire
])

# Définir les cibles de build
smart_portail_tool_sources = [
    'applications_user/smart_portail_tool/main.c',
    # Ajoutez d'autres fichiers sources si nécessaire
]

# Définir la cible de build pour l'application
smart_portail_tool = env.Program(
    target='build/smart_portail_tool',  # Spécifiez le chemin de sortie
    source=smart_portail_tool_sources
)

# Définir la cible par défaut
Default(smart_portail_tool)

