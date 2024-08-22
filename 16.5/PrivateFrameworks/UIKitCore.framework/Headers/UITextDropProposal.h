// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTDROPPROPOSAL_H
#define UITEXTDROPPROPOSAL_H

@protocol NSCopying;


#import "UIDropProposal.h"

@interface UITextDropProposal : UIDropProposal <NSCopying>



@property (nonatomic) NSUInteger dropAction; // ivar: _dropAction
@property (nonatomic) NSUInteger dropPerformer; // ivar: _dropPerformer
@property (nonatomic) NSUInteger dropProgressMode; // ivar: _dropProgressMode
@property (nonatomic) BOOL useFastSameViewOperations; // ivar: _useFastSameViewOperations


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDropOperation:(NSUInteger)arg0 ;


@end


#endif