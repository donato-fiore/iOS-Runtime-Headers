// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPDADVERTISINGDATA_H
#define WPDADVERTISINGDATA_H

@class NSData, NSMutableData, NSMutableSet;

#import <Foundation/Foundation.h>


@interface WPDAdvertisingData : NSObject

@property NSInteger advertRate; // ivar: _advertRate
@property BOOL assertPower; // ivar: _assertPower
@property (readonly, getter=getData) NSData *data;
@property (retain) NSMutableData *internalData; // ivar: _internalData
@property BOOL isRanging; // ivar: _isRanging
@property (retain) NSMutableSet *types; // ivar: _types


-(BOOL)isEqualToData:(id)arg0 ;
-(BOOL)isValidWithAdditionalRequest:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addAdvertisingRequest:(id)arg0 ;


@end


#endif