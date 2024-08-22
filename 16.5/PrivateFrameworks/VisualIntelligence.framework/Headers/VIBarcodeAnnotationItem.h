// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIBARCODEANNOTATIONITEM_H
#define VIBARCODEANNOTATIONITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VIBarcodeAnnotationItem : NSObject

@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox
@property (readonly, copy, nonatomic) NSString *payloadStringValue; // ivar: _payloadStringValue
@property (readonly, copy, nonatomic) NSString *symbology; // ivar: _symbology


+(id)annotationItemFromObservation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSymbology:(id)arg0 payloadStringValue:(id)arg1 normalizedBoundingBox:(struct CGRect )arg2 confidence:(float)arg3 ;


@end


#endif