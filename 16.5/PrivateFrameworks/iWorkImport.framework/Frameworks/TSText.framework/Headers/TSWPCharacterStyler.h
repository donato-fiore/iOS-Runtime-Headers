// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPCHARACTERSTYLER_H
#define TSWPCHARACTERSTYLER_H



#import "TSWPStorageStyler.h"

@interface TSWPCharacterStyler : TSWPStorageStyler



-(id)initWithStorage:(id)arg0 ;
-(void)applyStyle:(id)arg0 range:(struct _NSRange )arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2 ;
-(void)performStylingInRange:(struct _NSRange )arg0 undoTransaction:(struct TSWPStorageTransaction *)arg1 ;


@end


#endif