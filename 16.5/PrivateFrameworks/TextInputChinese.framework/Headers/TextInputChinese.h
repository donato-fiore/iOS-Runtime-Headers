

#include "TIKeyboardInputManagerChinese.h"
#include "TIKeyboardInputManagerWubi.h"
#include "TIWordSearchWubihua.h"
#include "TIWordSearchWubihua_zh_Hans.h"
#include "TIWordSearchWubihua_zh_Hant.h"
#include "TIWordSearchWubihua_yue_Hant.h"
#include "TIWordSearchShapeBased.h"
#include "TIKeyboardInputManagerPinyin.h"
#include "TIWordSearchCangjie.h"
#include "TIWordSearchCangjie_yue_Hant.h"
#include "TIKeyboardInputManagerShapeBased.h"
#include "CIMCandidateData.h"
#include "TIConversionHistory.h"
#include "TIConvertedCandidate.h"
#include "TIKeyboardInputManagerCangjie.h"
#include "TIKeyboardHandwritingSpecialization.h"
#include "TIWordSearchChinesePhoneticOperationGetCandidates.h"
#include "TIWordSearchHandwriting.h"
#include "TIWordSearchHandwriting_zh_Hans.h"
#include "TIWordSearchHandwriting_zh_Hant.h"
#include "TIWordSearchHandwriting_yue_Hant.h"
#include "TIKeyboardInputManagerChinesePhonetic.h"
#include "TIKeyboardInputManagerWubixing.h"
#include "RecognizerProvider.h"
#include "RecognizeDrawingOperation.h"
#include "GeneratePredictionsOperation.h"
#include "TIInputManagerHandwriting.h"
#include "TIWordSearchChinesePhonetic.h"
#include "TIWordSearchWubixing.h"
