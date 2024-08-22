// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLESTEWIESTATUSDOMAINDATA_H
#define STMUTABLESTEWIESTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STStewieStatusDomainData.h"

@interface STMutableStewieStatusDomainData : STStewieStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStewieActive) BOOL stewieActive;
@property (nonatomic, getter=isStewieConnected) BOOL stewieConnected;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif