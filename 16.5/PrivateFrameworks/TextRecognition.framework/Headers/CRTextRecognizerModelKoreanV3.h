// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTEXTRECOGNIZERMODELKOREANV3_H
#define CRTEXTRECOGNIZERMODELKOREANV3_H



#import "CRTextSequenceRecognizerTopKModelEspresso.h"

@interface CRTextRecognizerModelKoreanV3 : CRTextSequenceRecognizerTopKModelEspresso



+(id)defaultURLOfModelInThisBundle;
-(BOOL)supportCharacterBoxes;


@end


#endif