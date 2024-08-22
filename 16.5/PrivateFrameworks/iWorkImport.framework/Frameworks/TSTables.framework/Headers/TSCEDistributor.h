// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCEDISTRIBUTOR_H
#define TSCEDISTRIBUTOR_H

@class Protocol, NSArray;

#import <Foundation/Foundation.h>


@interface TSCEDistributor : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSArray *receivers; // ivar: _receivers


-(BOOL)hasReceiver:(id)arg0 ;
-(id)init;
-(void)addReceiver:(id)arg0 ;
-(void)addReceiverIfMissing:(id)arg0 ;
-(void)disconnect;
-(void)distributeBlock:(id)arg0 ;
-(void)dropAllTargets;
-(void)removeReceiver:(id)arg0 ;
-(void)suspendDuringBlock:(id)arg0 ;


@end


#endif