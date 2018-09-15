#ifndef LISTINGTEXTRENDERER_H
#define LISTINGTEXTRENDERER_H

#include <QFont>
#include <QFontMetrics>
#include "../../redasm/disassembler/listing/listingrenderer.h"

class ListingTextRenderer : public REDasm::ListingRenderer
{
    public:
        ListingTextRenderer(const QFont& font, REDasm::DisassemblerAPI* disassembler);
        virtual ~ListingTextRenderer();
        virtual void renderText(const REDasm::RendererFormat* rf);
        virtual void renderCursor(const REDasm::RendererFormat* rf);
        void toggleCursorActive();

    protected:
        virtual void fontUnit(double* w = NULL, double* h = NULL) const;

    private:
        bool m_cursoractive;
        QFontMetrics m_fontmetrics;
};

#endif // LISTINGTEXTRENDERER_H
