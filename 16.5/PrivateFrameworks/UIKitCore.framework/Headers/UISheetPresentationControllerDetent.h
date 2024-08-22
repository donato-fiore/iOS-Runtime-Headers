// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISHEETPRESENTATIONCONTROLLERDETENT_H
#define UISHEETPRESENTATIONCONTROLLERDETENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISheetPresentationControllerDetent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat _constant; // ivar: __constant
@property (readonly, nonatomic) BOOL _createdWithDeprecatedInitializer; // ivar: __createdWithDeprecatedInitializer
@property (readonly, nonatomic) NSString *_identifier;
@property (readonly, nonatomic) id *_internalBlock; // ivar: __internalBlock
@property (readonly, nonatomic) NSInteger _type; // ivar: __type
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)_detentWithContainerViewBlock:(id)arg0 ;
+(id)_detentWithIdentifier:(id)arg0 constant:(CGFloat)arg1 ;
+(id)_detentWithIdentifier:(id)arg0 containerViewBlock:(id)arg1 ;
+(id)_detentWithIdentifier:(id)arg0 resolutionContextBlock:(id)arg1 ;
+(id)_detentWithResolutionContextBlock:(id)arg0 ;
+(id)customDetentWithIdentifier:(id)arg0 resolver:(id)arg1 ;
+(id)largeDetent;
+(id)mediumDetent;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_valueInResolutionContext:(id)arg0 ;
-(CGFloat)resolvedValueInContext:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 internalBlock:(id)arg2 constant:(unk)arg3  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif