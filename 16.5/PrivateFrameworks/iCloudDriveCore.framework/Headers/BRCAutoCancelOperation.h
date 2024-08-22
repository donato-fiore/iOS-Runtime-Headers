// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCAUTOCANCELOPERATION_H
#define BRCAUTOCANCELOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass, OS_dispatch_group, OS_dispatch_source;



@interface BRCAutoCancelOperation : BRCOperation <BRCOperationSubclass>

 {
    NSObject<OS_dispatch_group> *_observersGroup;
    NSObject<OS_dispatch_source> *_cancelTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasObservers;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithName:(id)arg0 syncContext:(id)arg1 group:(id)arg2 ;
-(void)_initializeCancelTimer;
-(void)beginObservingChanges;
-(void)dealloc;
-(void)endObservingChanges;
-(void)main;


@end


#endif