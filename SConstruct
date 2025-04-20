import os

# Définir les variables d'environnement
env = Environment()

# Ajouter les répertoires sources
env.Append(CPPPATH=[
    '#applications_user/smart_portail_tool',
    # Ajoutez d'autres répertoires si nécessaire
])

# Définir les cibles de build
env.BuildTarget(
    target='smart_portail_tool',
    source=['applications_user/smart_portail_tool/main.c'],
    action='$CC $CFLAGS $CPPFLAGS $LDFLAGS -o $TARGET $SOURCES'
)

# Définir la cible par défaut
Default(env.BuildTarget)
