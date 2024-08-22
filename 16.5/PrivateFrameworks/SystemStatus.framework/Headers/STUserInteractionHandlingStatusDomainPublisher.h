// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSERINTERACTIONHANDLINGSTATUSDOMAINPUBLISHER_H
#define STUSERINTERACTIONHANDLINGSTATUSDOMAINPUBLISHER_H



#import "STStatusDomainPublisher.h"

@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher {
    id *_userInteractionHandlerBlock;
}




-(void)handleUserInteraction:(id)arg0 forDomain:(NSUInteger)arg1 ;
-(void)handleUserInteractionsWithBlock:(id)arg0 ;


@end


#endif