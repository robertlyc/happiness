//
//  FaceView.h
//  Happiness
//
//  Created by RoBeRt on 12-11-15.
//  Copyright (c) 2012年 RoBeRt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
