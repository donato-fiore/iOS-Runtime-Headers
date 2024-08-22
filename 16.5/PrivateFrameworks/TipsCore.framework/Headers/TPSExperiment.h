// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSEXPERIMENT_H
#define TPSEXPERIMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger camp; // ivar: _camp
@property (nonatomic) CGFloat holdoutAllocation; // ivar: _holdoutAllocation
@property (nonatomic) NSInteger identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)updateCampIfNeeded;
-(BOOL)updateWithExperimentDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif