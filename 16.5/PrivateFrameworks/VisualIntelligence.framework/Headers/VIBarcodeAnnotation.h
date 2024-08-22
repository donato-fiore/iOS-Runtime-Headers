// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIBARCODEANNOTATION_H
#define VIBARCODEANNOTATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VIBarcodeAnnotation : NSObject

@property (readonly, copy, nonatomic) NSArray *annotationItems; // ivar: _annotationItems


+(id)annotationFromObservations:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnnotationItems:(id)arg0 ;


@end


#endif