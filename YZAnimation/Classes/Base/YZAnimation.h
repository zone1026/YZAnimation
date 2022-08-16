//
//  YZAnimation.h
//  YZAnimation
//
//  Created by hyz on 2022/8/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YZAnimation : NSObject

/// 开启视图动画
- (void)startAnimation;

/// 停止视图动画
/// @param layer 需要停止的视图层
- (void)stopAnimation:(CALayer *)layer;

@end

NS_ASSUME_NONNULL_END
