/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef UPDATA_VIEW_BASE_HPP
#define UPDATA_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/updata_screen/UPDATAPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/progress_indicators/BoxProgress.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class UPDATAViewBase : public touchgfx::View<UPDATAPresenter>
{
public:
    UPDATAViewBase();
    virtual ~UPDATAViewBase() {}

    virtual void setupScreen();

    /*
     * Custom Action Handlers
     */
    virtual void RefreshDataClicked()
    {
        // Override and implement this function in UPDATAView
    }

    virtual void StartUpClicked()
    {
        // Override and implement this function in UPDATAView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::ButtonWithLabel buttonWithReturn;
    touchgfx::ButtonWithLabel buttonWithRefresh;
    touchgfx::ButtonWithLabel buttonWithStart;
    touchgfx::Box box2;
    touchgfx::BoxProgress boxProgress1;
    touchgfx::TextArea textArea1;
    touchgfx::ScrollableContainer scrollableContainer1;
    touchgfx::TextAreaWithOneWildcard longText;


    /*
     * Wildcard Buffers
     */
    static const uint16_t LONGTEXT_SIZE = 50;
    touchgfx::Unicode::UnicodeChar longTextBuffer[LONGTEXT_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<UPDATAViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // UPDATA_VIEW_BASE_HPP
