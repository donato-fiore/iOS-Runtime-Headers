// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUOVERLAYCONFIGURATION_H
#define SUOVERLAYCONFIGURATION_H

@class NSRegularExpression, NSString;

#import <Foundation/Foundation.h>


@interface SUOverlayConfiguration : NSObject {
    NSRegularExpression *_bagKeyPattern;
    NSRegularExpression *_urlPattern;
}


@property (readonly, nonatomic) NSInteger cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) BOOL shouldShowNavigationBar; // ivar: _shouldShowNavigationBar
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSString *transitionName; // ivar: _transitionName


-(BOOL)matchesURL:(id)arg0 ;
-(BOOL)matchesURLBagKey:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif