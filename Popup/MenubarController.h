
@class StatusItemView;

@interface MenubarController : NSObject {
@private
    StatusItemView *_statusItemView;
}

@property (nonatomic, assign) BOOL hasActiveIcon;
@property (nonatomic, readonly) NSStatusItem *statusItem;
@property (nonatomic, readonly) StatusItemView *statusItemView;

@end
