//
// Created by polydome on 4/15/20.
//

#ifndef EKOSYSTEM_ORGANISMSLISTPRESENTER_H
#define EKOSYSTEM_ORGANISMSLISTPRESENTER_H

#include <string>
#include "domain/space/space.h"
#include "presentation/state/ApplicationEventListener.h"
#include "presentation/state/ApplicationStore.h"
#include "presentation/view/OrganismsListView.h"

struct OrganismEntry {
    unsigned id;
    std::string type;
};

class OrganismsListPresenter : public ApplicationEventListener {
public:
    OrganismsListPresenter(Space& space, ApplicationStore& store);

    int getSize();
    OrganismEntry entryAt(int index);

    void attach(OrganismsListView* view);

    void onEvent(ApplicationEvent event) override;

private:
    Space& space;
    ApplicationStore& store;
    OrganismsListView* view;
};


#endif //EKOSYSTEM_ORGANISMSLISTPRESENTER_H
