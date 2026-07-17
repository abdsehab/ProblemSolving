document.addEventListener('DOMContentLoaded', () => {
    const contactForm = document.getElementById('contact-form');

    if (contactForm) {
        contactForm.addEventListener('submit', (e) => {
            e.preventDefault();

            // Get form values
            const name = contactForm.querySelector('input[type="text"]').value;
            const email = contactForm.querySelector('input[type="email"]').value;
            const message = contactForm.querySelector('textarea').value;

            // Simple validation check (browser handles most via 'required')
            if (name && email && message) {
                // Simulate an API call
                const submitBtn = contactForm.querySelector('button');
                const originalBtnText = submitBtn.innerText;
                
                submitBtn.innerText = 'Sending...';
                submitBtn.disabled = true;

                setTimeout(() => {
                    alert(`Thank you, ${name}! Your message has been sent successfully.`);
                    contactForm.reset();
                    submitBtn.innerText = originalBtnText;
                    submitBtn.disabled = false;
                }, 1500);
            }
        });
    }

    // Smooth scrolling for navigation links (fallback for CSS)
    document.querySelectorAll('nav ul li a').forEach(anchor => {
        anchor.addEventListener('click', function(e) {
            const targetId = this.getAttribute('href');
            if (targetId && targetId.startsWith('#')) {
                e.preventDefault();
                const targetElement = document.querySelector(targetId);
                if (targetElement) {
                    targetElement.scrollIntoView({
                        behavior: 'smooth'
                    });
                }
            }
        });
    });
});