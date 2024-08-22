// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCUMENTACTION_H
#define ICDOCUMENTACTION_H

@class NSArray;


#import "ICAction.h"

@interface ICDocumentAction : ICAction {
    NSArray *_inputContentClasses;
}


@property (readonly, nonatomic) NSArray *fileTypes; // ivar: _fileTypes


-(id)descriptionDictionary;
-(id)fileTypeForOpeningItem:(id)arg0 ;
-(id)identifier;
-(id)inputContentClasses;
-(id)name;
// -(void)performActionWithInput:(id)arg0 parameters:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;


@end


#endif