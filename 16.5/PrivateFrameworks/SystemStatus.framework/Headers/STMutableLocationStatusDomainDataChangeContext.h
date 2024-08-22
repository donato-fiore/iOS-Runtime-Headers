// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLELOCATIONSTATUSDOMAINDATACHANGECONTEXT_H
#define STMUTABLELOCATIONSTATUSDOMAINDATACHANGECONTEXT_H

@class NSString;
@protocol STMutableStatusDomainDataChangeContext;


#import "STLocationStatusDomainDataChangeContext.h"

@interface STMutableLocationStatusDomainDataChangeContext : STLocationStatusDomainDataChangeContext <STMutableStatusDomainDataChangeContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL wantsProminentIndication;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif