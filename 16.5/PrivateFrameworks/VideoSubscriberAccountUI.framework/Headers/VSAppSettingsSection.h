// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPSETTINGSSECTION_H
#define VSAPPSETTINGSSECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VSAppSettingsSection : NSObject

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *viewModels; // ivar: _viewModels


+(id)modifierForKind:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithViewModels:(id)arg0 kind:(NSInteger)arg1 ;


@end


#endif