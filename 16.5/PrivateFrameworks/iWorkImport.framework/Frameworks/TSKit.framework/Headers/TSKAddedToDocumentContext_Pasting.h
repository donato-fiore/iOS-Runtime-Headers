// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKADDEDTODOCUMENTCONTEXT_PASTING_H
#define TSKADDEDTODOCUMENTCONTEXT_PASTING_H

@class NSMutableArray;


#import "TSKAddedToDocumentContext.h"

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}




-(BOOL)autoUpdateSmartFields;
-(BOOL)syncChanges;
-(BOOL)uniqueSmartFields;
-(BOOL)wasPasted;
-(id)addedDrawables;
-(id)description;
-(void)addDrawable:(id)arg0 ;
-(void)addDrawables:(id)arg0 ;


@end


#endif