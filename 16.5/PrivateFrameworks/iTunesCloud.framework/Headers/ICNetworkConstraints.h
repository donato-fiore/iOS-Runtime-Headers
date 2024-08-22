// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNETWORKCONSTRAINTS_H
#define ICNETWORKCONSTRAINTS_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying>

 {
    BOOL _dataAllowedFallbackValue;
    BOOL _cellularDataAllowedFallbackValue;
    BOOL _wiFiDataAllowedFallbackValue;
    NSMutableDictionary *_networkTypeToDataAllowed;
    NSMutableDictionary *_networkTypeToSizeLimit;
}




+(id)constraintsForSystemApplicationType:(NSInteger)arg0 ;
+(id)mediaTypeNetworkConstraintsFromURLBag:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldAllowDataForCellularNetworkTypes;
-(BOOL)shouldAllowDataForNetworkType:(NSInteger)arg0 ;
-(BOOL)shouldAllowDataForWiFiNetworkTypes;
-(NSUInteger)hash;
-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sizeLimitForNetworkType:(NSInteger)arg0 ;


@end


#endif