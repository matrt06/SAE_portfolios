document.addEventListener('DOMContentLoaded', function() {
    const competenceContainers = document.querySelectorAll('.competence-container, .competence-container2, .competence-container3, .competence-container4');

    competenceContainers.forEach(container => {
        container.addEventListener('mouseover', function() {
            container.style.borderColor = '#fff'; /* Nouvelle couleur de la bordure au survol */
            container.style.transition = 'border-color 0.3s ease'; /* Ajout de la transition */
        });

        container.addEventListener('mouseout', function() {
            container.style.borderColor = '#3498db'; /* Bordure initiale bleue */
        });
    });
});
