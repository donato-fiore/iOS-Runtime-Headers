// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCOMMENTSTORAGEWRAPPER_H
#define TSTCOMMENTSTORAGEWRAPPER_H

@class TSDCommentStorage, NSString;
@protocol TSTCellDiffing, TSSPropertyCommandSerializing;

#import <Foundation/Foundation.h>


@interface TSTCommentStorageWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>



@property (readonly, nonatomic) TSDCommentStorage *commentStorage; // ivar: _commentStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cellDiffProperties;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)initWithCommentStorage:(id)arg0 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 ;
-(void)applyToCell:(id)arg0 ;
-(void)didInitFromSOS;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif