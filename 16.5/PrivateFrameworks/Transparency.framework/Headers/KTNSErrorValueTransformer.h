// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTNSERRORVALUETRANSFORMER_H
#define KTNSERRORVALUETRANSFORMER_H

@class NSSecureUnarchiveFromDataTransformer;



@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
+(id)name;
+(void)registerTransformer;
-(id)allowedTopLevelClasses;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif