// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILARGECONTENTVIEWERITEMSTOREDPROPERTIES_H
#define _UILARGECONTENTVIEWERITEMSTOREDPROPERTIES_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding>



@property (nonatomic) BOOL didSetLargeContentImage; // ivar: _didSetLargeContentImage
@property (nonatomic) BOOL didSetLargeContentImageInsets; // ivar: _didSetLargeContentImageInsets
@property (nonatomic) BOOL didSetLargeContentTitle; // ivar: _didSetLargeContentTitle
@property (nonatomic) BOOL didSetScalesLargeContentImage; // ivar: _didSetScalesLargeContentImage
@property (nonatomic) BOOL didSetShowsLargeContentViewer; // ivar: _didSetShowsLargeContentViewer
@property (retain, nonatomic) UIImage *largeContentImage; // ivar: _largeContentImage
@property (nonatomic) UIEdgeInsets largeContentImageInsets; // ivar: _largeContentImageInsets
@property (copy, nonatomic) NSString *largeContentTitle; // ivar: _largeContentTitle
@property (nonatomic) BOOL scalesLargeContentImage; // ivar: _scalesLargeContentImage
@property (nonatomic) BOOL showsLargeContentViewer; // ivar: _showsLargeContentViewer


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif