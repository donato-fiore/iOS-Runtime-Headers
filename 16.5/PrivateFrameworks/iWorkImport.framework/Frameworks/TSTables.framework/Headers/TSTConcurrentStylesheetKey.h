// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCONCURRENTSTYLESHEETKEY_H
#define TSTCONCURRENTSTYLESHEETKEY_H

@class TSSPropertyMap, TSSStyle;

#import <Foundation/Foundation.h>


@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSPropertyMap *propertyMap; // ivar: _propertyMap
@property (retain, nonatomic) TSSStyle *style; // ivar: _style


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithStyle:(id)arg0 andPropertyMap:(id)arg1 ;


@end


#endif