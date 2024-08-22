// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STLOCATIONSTATUSDOMAINPUBLISHER_H
#define STLOCATIONSTATUSDOMAINPUBLISHER_H



#import "STUserInteractionHandlingStatusDomainPublisher.h"

@interface STLocationStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher



+(NSUInteger)statusDomainName;
+(id)emptyChangeContext;
+(id)emptyData;
-(void)setData:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)setVolatileData:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
// -(void)updateData:(id)arg0 completion:(unk)arg1  ;
// -(void)updateVolatileData:(id)arg0 completion:(unk)arg1  ;


@end


#endif