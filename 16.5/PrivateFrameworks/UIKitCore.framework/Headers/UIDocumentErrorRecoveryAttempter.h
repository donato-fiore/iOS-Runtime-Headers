// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDOCUMENTERRORRECOVERYATTEMPTER_H
#define UIDOCUMENTERRORRECOVERYATTEMPTER_H


#import <Foundation/Foundation.h>

#import "UIDocument.h"

@interface UIDocumentErrorRecoveryAttempter : NSObject {
    UIDocument *_document;
    id *_wrappedRecoveryAttempter;
    id *_continuerOrNil;
    NSInteger _silentRecoveryOptionIndex;
    id *_appModalRecoveryAttempter;
    id *_recoveryCancelerOrNil;
    ? _errorRecoveryAttempterFlags;
}




-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(BOOL)attemptSilentRecoveryFromError:(id)arg0 error:(*id)arg1 ;
// -(id)initWithDocument:(id)arg0 silentRecoveryOptionIndex:(NSUInteger)arg1 appModalRecoveryAttempter:(id)arg2 recoveryCanceler:(unk)arg3  ;
-(id)initWithDocument:(id)arg0 wrappedRecoveryAttempter:(id)arg1 ;
-(void)cancelRecovery;
-(void)dealloc;


@end


#endif