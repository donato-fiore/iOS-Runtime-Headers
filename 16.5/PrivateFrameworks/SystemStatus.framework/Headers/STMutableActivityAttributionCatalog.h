// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMUTABLEACTIVITYATTRIBUTIONCATALOG_H
#define STMUTABLEACTIVITYATTRIBUTIONCATALOG_H

@class NSString;
@protocol STMutableStatusDomainData, STMutableStatusDomainDataDifferencing;


#import "STActivityAttributionCatalog.h"

@interface STMutableActivityAttributionCatalog : STActivityAttributionCatalog <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addAttribution:(id)arg0 forKey:(id)arg1 ;
-(void)removeAttribution:(id)arg0 forKey:(id)arg1 ;
-(void)removeAttributionsForKey:(id)arg0 ;
-(void)setAttributions:(id)arg0 forKey:(id)arg1 ;


@end


#endif