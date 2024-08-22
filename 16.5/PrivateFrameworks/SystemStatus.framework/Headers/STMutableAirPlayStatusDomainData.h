// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLEAIRPLAYSTATUSDOMAINDATA_H
#define STMUTABLEAIRPLAYSTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STAirPlayStatusDomainData.h"

@interface STMutableAirPlayStatusDomainData : STAirPlayStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (nonatomic) NSUInteger airPlayState;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif