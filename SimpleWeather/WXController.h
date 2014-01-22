//
//  WXController.h
//  SimpleWeather
//
//  Created by Jeferson Homem on 21/01/14.
//  Copyright (c) 2014 Jeferson Homem. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WXController : UIViewController

<UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
@property (nonatomic, strong) UIImageView *backgroundImageView;
@property (nonatomic, strong) UIImageView *blurredImageView;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) CGFloat screenHeight;

@end
