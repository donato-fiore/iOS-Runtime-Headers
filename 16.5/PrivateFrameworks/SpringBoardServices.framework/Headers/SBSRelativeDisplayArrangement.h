// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSRELATIVEDISPLAYARRANGEMENT_H
#define SBSRELATIVEDISPLAYARRANGEMENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSRelativeDisplayArrangement : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayIdentifier; // ivar: _displayIdentifier
@property (readonly, nonatomic) unsigned int edge; // ivar: _edge
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayIdentifier:(id)arg0 edge:(unsigned int)arg1 offset:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif