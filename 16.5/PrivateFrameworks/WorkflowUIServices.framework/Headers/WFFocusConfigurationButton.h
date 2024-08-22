// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONBUTTON_H
#define WFFOCUSCONFIGURATIONBUTTON_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFocusConfigurationButton : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isDestructive; // ivar: _isDestructive
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 localizedTitle:(id)arg1 isDestructive:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif