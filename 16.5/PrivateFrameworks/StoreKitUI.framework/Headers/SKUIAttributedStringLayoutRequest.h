// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIATTRIBUTEDSTRINGLAYOUTREQUEST_H
#define SKUIATTRIBUTEDSTRINGLAYOUTREQUEST_H

@class NSAttributedString, NSString;
@protocol SKUILayoutRequest;

#import <Foundation/Foundation.h>


@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest>



@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class layoutClass;
@property (nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsBaselineOffset; // ivar: _wantsBaselineOffset
@property (nonatomic) CGFloat width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributedString:(id)arg0 ;


@end


#endif