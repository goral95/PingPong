//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *background;
        TMainMenu *MainMenu1;
        TMenuItem *Start1;
        TImage *paddle1;
        TImage *paddle2;
        TImage *ball;
        TTimer *paddle1_up;
        TTimer *paddle1_down;
        TTimer *paddle2_up;
        TTimer *paddle2_down;
        TTimer *ball_timer;
        TMenuItem *Opcje1;
        TMenuItem *Informacje1;
        TMenuItem *Wyjscie1;
        TMenuItem *RodzajePaletek1;
        TMenuItem *RozmiarPilki1;
        TMenuItem *Small1;
        TMenuItem *Medium1;
        TMenuItem *Big1;
        TMenuItem *Small2;
        TMenuItem *Medium2;
        TMenuItem *Big2;
        TLabel *redScore;
        TLabel *blueScore;
        TButton *Button1;
        TMenuItem *Ogrze1;
        TMenuItem *Otwrcy1;
        void __fastcall FormResize(TObject *Sender);
        void __fastcall paddle1_upTimer(TObject *Sender);
        void __fastcall paddle1_downTimer(TObject *Sender);
        void __fastcall paddle2_upTimer(TObject *Sender);
        void __fastcall paddle2_downTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Start1Click(TObject *Sender);
        void __fastcall ball_timerTimer(TObject *Sender);
        void __fastcall Small1Click(TObject *Sender);
        void __fastcall Medium1Click(TObject *Sender);
        void __fastcall Big1Click(TObject *Sender);
        void __fastcall Small2Click(TObject *Sender);
        void __fastcall Medium2Click(TObject *Sender);
        void __fastcall Big2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Wyjscie1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Ogrze1Click(TObject *Sender);
        void __fastcall Otwrcy1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 