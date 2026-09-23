#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char *daily_quotes[] = {

    "Dream  like an engineer, build like an engineer, and never stop learning.",

    "Every line of code you write today is a step toward the engineer you want to become.",

    "You don't need to know everything today. You only need to understand something better than yesterday.",

    "Great embedded engineers are not built in a day; they are built one bug, one register, and one breakthrough at a time.",

    "Don't wait for the perfect opportunity. Build something so good that the opportunity finds you.",

    "Your competition is not the person beside you. It is the version of you that stopped improving.",

    "A failed build is not failure. It is feedback from the system.",

    "When the code doesn't work, debug it. When the design doesn't work, improve it. When you don't understand, learn it.",

    "One day, the systems you are only dreaming about today will be systems you know how to build.",

    "Master the fundamentals, and complexity will stop being intimidating.",

    "Embedded systems teach one powerful lesson: small details create big results.",

    "Your future career will be built from the skills you choose to practice when nobody is watching.",

    "Don't chase shortcuts. Build foundations strong enough to carry your ambitions.",

    "Every pointer you understand, every peripheral you configure, and every bug you solve is making you harder to replace.",

    "Think beyond making code run. Learn to make systems reliable.",

    "The goal is not simply to get a job. The goal is to become the engineer companies trust with difficult problems.",

    "Robots don't become autonomous by magic. They become autonomous because engineers refuse to stop solving problems.",

    "Today may be just another day of learning. Years from now, it may be the reason you can build what others cannot.",

    "Stay curious when things work. Stay calm when things fail. Stay relentless when things get difficult.",

    "You are not preparing for an interview. You are preparing for the engineer you want to become.",

    "Learn the hardware. Master the firmware. Understand the system. Then build something meaningful.",

    "The strongest engineers aren't those who never get stuck; they are the ones who know how to get unstuck.",

    "One more concept. One more project. One more bug fixed. One more step forward.",

    "Your ambition is bigger than today's difficulty. Keep moving.",

    "Build quietly. Learn deeply. Let your work speak loudly.",

    "Someday, someone will use a product that works because of something you engineered. Start preparing for that day now.",

    "Don't measure your progress by how far you still have to go. Measure it by how much you can do now that you couldn't do before.",

    "The engineer you admire may simply be someone who stayed consistent longer than you have.",

    "Wake up with a problem to solve, not a reason to postpone.",

    "Your goal isn't to become perfect. Your goal is to become exceptionally capable.",

    "Code with discipline. Design with purpose. Debug with patience. Learn without ego.",

    "The road to becoming an excellent embedded engineer is long, but every register, protocol, peripheral, and project takes you one step closer.",

    "Don't fear difficult technologies. Break them into smaller problems and conquer them one at a time.",

    "Your future self is depending on what you choose to do today.",

    "Keep building. Keep breaking. Keep debugging. Keep learning. That's how engineers are made.",

    "One day you will look back at today's struggles and realize they were training for the problems you were meant to solve.",

    "Energy creates momentum. Momentum creates consistency. Consistency creates mastery.",

    "You have ambitious goals. Now give those goals the discipline they deserve.",

    "The world doesn't need another person who only knows theory. Become the engineer who can turn ideas into working systems.",

    "Start the day hungry to learn. End the day proud that you moved forward.",

    "Your journey from student to engineer is happening one difficult problem at a time.",

    "Don't just dream of building intelligent machines. Learn the electronics, firmware, algorithms, and systems that make them possible.",

    "There will be days when progress feels invisible. Keep going. Firmware also works silently before anyone sees the result.",

    "A powerful career is built the same way a reliable system is built: strong fundamentals, careful design, testing, debugging, and continuous improvement.",

    "You don't need permission to become exceptional. You need consistency.",

    "Be patient with the process, but impatient with your excuses.",

    "Your ambition says 'I want to build great systems.' Your daily actions must say 'I am becoming capable of building them.'"

};

static const size_t quote_count = sizeof(daily_quotes) / sizeof(daily_quotes[0]);

const char *goodSpell(void){
    size_t key = (size_t)rand() % quote_count;
    return daily_quotes[key];

}

int main(void){
    srand((unsigned)time(NULL));
    const char *s = goodSpell();
    printf("\n%s\n", s);
    return 0;
}