// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICACHEDBOUNDINGPATHBITMAPDATAREFERENCECORNER_H
#define _UICACHEDBOUNDINGPATHBITMAPDATAREFERENCECORNER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding>

 {
    _UIBoundingPathBitmapDataCorner _referenceCorner;
}




+(BOOL)supportsSecureCoding;
+(id)cachedReferenceCornerForRadius:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner )arg0 ;
-(struct _UIBoundingPathBitmapDataCorner )referenceCornerCopy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif