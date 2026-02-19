.class public Lc2/d;
.super Ljava/lang/Object;
.source "SourceFile"


# static fields
.field public static l:Z


# instance fields
.field a:I

.field public b:Lc2/j;

.field c:Lc2/e;

.field private final d:Lc2/b;

.field public e:Lf2/i;

.field public f:Lo2/c;

.field public g:Lo2/a;

.field private final h:Lq2/a;

.field public i:Lr2/c;

.field public j:LX1/c;

.field public k:Lc2/c;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(LW1/b;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lc2/j;

    invoke-direct {v0}, Lc2/j;-><init>()V

    iput-object v0, p0, Lc2/d;->b:Lc2/j;

    new-instance v0, Lc2/e;

    invoke-direct {v0}, Lc2/e;-><init>()V

    iput-object v0, p0, Lc2/d;->c:Lc2/e;

    new-instance v0, Lc2/b;

    invoke-direct {v0}, Lc2/b;-><init>()V

    iput-object v0, p0, Lc2/d;->d:Lc2/b;

    new-instance v0, Lf2/i;

    invoke-direct {v0}, Lf2/i;-><init>()V

    iput-object v0, p0, Lc2/d;->e:Lf2/i;

    sput-object v0, LW1/b;->t:Lf2/i;

    new-instance v0, Lo2/c;

    invoke-direct {v0}, Lo2/c;-><init>()V

    iput-object v0, p0, Lc2/d;->f:Lo2/c;

    new-instance v0, Lo2/a;

    invoke-direct {v0}, Lo2/a;-><init>()V

    iput-object v0, p0, Lc2/d;->g:Lo2/a;

    new-instance v0, Lc2/c;

    invoke-direct {v0}, Lc2/c;-><init>()V

    iput-object v0, p0, Lc2/d;->k:Lc2/c;

    sput-object v0, LW1/b;->s:Lc2/c;

    new-instance v0, Lr2/c;

    invoke-direct {v0, p1}, Lr2/c;-><init>(LW1/b;)V

    iput-object v0, p0, Lc2/d;->i:Lr2/c;

    sput-object v0, LW1/b;->w:Lr2/c;

    new-instance p1, LX1/c;

    invoke-direct {p1}, LX1/c;-><init>()V

    iput-object p1, p0, Lc2/d;->j:LX1/c;

    new-instance p1, Lq2/a;

    invoke-direct {p1}, Lq2/a;-><init>()V

    iput-object p1, p0, Lc2/d;->h:Lq2/a;

    return-void
.end method

.method private g()V
    .locals 3

    sget-object v0, Li0/i;->e:Li0/h;

    const-string v1, "save.game"

    invoke-interface {v0, v1}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v0

    invoke-virtual {v0}, Lm0/a;->j()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lm0/a;->w()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lc2/c;->l0(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lc2/c;->s0:Z

    :goto_0
    return-void
.end method

.method private h()V
    .locals 3

    sget-object v0, Li0/i;->e:Li0/h;

    const-string v1, "save_b.game"

    invoke-interface {v0, v1}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v0

    invoke-virtual {v0}, Lm0/a;->j()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lm0/a;->w()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lc2/c;->l0(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lc2/c;->s0:Z

    :goto_0
    return-void
.end method

.method private n()V
    .locals 4

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->z:Lv2/A;

    const-string v1, "Your save file was corrupted."

    const-string v2, "The last backup has been loaded!"

    const-string v3, "Error!"

    invoke-virtual {v0, v3, v1, v2}, Lv2/A;->O(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public a()Z
    .locals 2

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "\u20ac"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "kr"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "PLN"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "z\u0142"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "RON"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "CZK"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "K\u010d"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "\u00a3"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "GBP"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public b()Z
    .locals 1

    sget-boolean v0, LW1/b;->y:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-boolean v0, v0, Lc2/c;->F0:Z

    if-nez v0, :cond_1

    :cond_0
    invoke-virtual {p0}, Lc2/d;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    const/4 v0, 0x1

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public c()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0xbb8

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public d()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x1e

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public e(I)Z
    .locals 1

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    iget-object v0, v0, Lf2/i;->j:Lf2/u;

    iget-object v0, v0, Lf2/u;->C:Lq2/p;

    invoke-virtual {v0, p1}, Lq2/p;->j(I)Z

    move-result p1

    return p1
.end method

.method public f()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    const-string v1, "19"

    iput-object v1, v0, Lc2/c;->u0:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    invoke-direct {p0}, Lc2/d;->g()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_2
    invoke-direct {p0}, Lc2/d;->n()V

    invoke-direct {p0}, Lc2/d;->h()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0}, Lr2/c;->d()V

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    const-string v1, "20"

    iput-object v1, v0, Lc2/c;->u0:Ljava/lang/String;

    invoke-virtual {v0}, Lc2/c;->S()Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    iget-object v1, p0, Lc2/d;->k:Lc2/c;

    const/4 v2, 0x0

    iput-boolean v2, v1, Lc2/c;->t0:Z

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public i()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x4e2

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public j()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x3c

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public k()V
    .locals 12

    sget-boolean v0, Lc2/d;->l:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    sput-boolean v0, Lc2/d;->l:Z

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    iget-object v0, v0, Lr2/d;->g:Lr2/g;

    invoke-virtual {v0}, Lr2/g;->i()Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x96

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    iget-object v0, v0, Lr2/d;->g:Lr2/g;

    const-string v1, ""

    invoke-virtual {v0, v1}, Lr2/g;->m(Ljava/lang/String;)V

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    iget-object v0, v0, Lr2/d;->g:Lr2/g;

    invoke-virtual {v0, v1}, Lr2/g;->k(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    iget-object v0, v0, Lf2/i;->z:Lv2/A;

    const-string v1, "Important info"

    const-string v2, "An error occurred (Account already updated error)."

    invoke-virtual {v0, v1, v2}, Lv2/A;->E(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    invoke-static {}, LW1/b;->q()I

    move-result v0

    div-int/lit8 v0, v0, 0xc

    iput v0, p0, Lc2/d;->a:I

    sget-object v0, LW1/b;->r:La2/c;

    iget-boolean v0, v0, La2/c;->i:Z

    if-eqz v0, :cond_5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-boolean v0, v0, Lc2/c;->t0:Z

    if-nez v0, :cond_3

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    const v1, 0x3ccccccd    # 0.025f

    mul-float v2, v0, v1

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    const v3, 0x3ec28f5c    # 0.38f

    mul-float v4, v0, v3

    invoke-static {}, LW1/b;->r()I

    move-result v0

    int-to-float v5, v0

    const/16 v0, 0x5a

    invoke-static {v0}, Lq2/m;->c(I)Ljava/lang/String;

    move-result-object v6

    const v9, 0x3dcccccd    # 0.1f

    const v10, 0x3dcccccd    # 0.1f

    const/4 v3, 0x0

    const/4 v7, 0x1

    const v8, 0x3dcccccd    # 0.1f

    invoke-static/range {v2 .. v10}, Lq2/e;->r(FFFFLjava/lang/String;IFFF)Lo0/d;

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    mul-float v2, v0, v1

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    const v3, 0x3ed70a3d    # 0.42f

    mul-float v4, v0, v3

    invoke-static {}, LW1/b;->r()I

    move-result v0

    int-to-float v5, v0

    const/16 v0, 0x5b

    invoke-static {v0}, Lq2/m;->c(I)Ljava/lang/String;

    move-result-object v6

    const/4 v3, 0x0

    invoke-static/range {v2 .. v10}, Lq2/e;->r(FFFFLjava/lang/String;IFFF)Lo0/d;

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    mul-float v2, v0, v1

    invoke-static {}, LW1/b;->q()I

    move-result v0

    int-to-float v0, v0

    const v1, 0x3f11eb85    # 0.57f

    mul-float v4, v0, v1

    invoke-static {}, LW1/b;->r()I

    move-result v0

    int-to-float v5, v0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v1, 0x5e

    invoke-static {v1}, Lq2/m;->c(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->u0:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static/range {v2 .. v10}, Lq2/e;->r(FFFFLjava/lang/String;IFFF)Lo0/d;

    sget-boolean v0, LW1/b;->y:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-static {}, LW1/b;->q()I

    move-result v1

    mul-int/lit8 v1, v1, 0x46

    int-to-float v1, v1

    const/high16 v2, 0x42c80000    # 100.0f

    div-float/2addr v1, v2

    iput v1, v0, Lq2/a;->b:F

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-static {}, LW1/b;->q()I

    move-result v1

    mul-int/lit8 v1, v1, 0x1e

    int-to-float v1, v1

    div-float/2addr v1, v2

    iput v1, v0, Lq2/a;->c:F

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-static {}, LW1/b;->q()I

    move-result v1

    mul-int/lit8 v1, v1, 0x7

    int-to-float v1, v1

    div-float/2addr v1, v2

    iput v1, v0, Lq2/a;->d:F

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-static {}, LW1/b;->r()I

    move-result v1

    int-to-float v1, v1

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v1, v3

    iget-object v4, p0, Lc2/d;->h:Lq2/a;

    iget v5, v4, Lq2/a;->c:F

    div-float/2addr v5, v3

    sub-float/2addr v1, v5

    iput v1, v0, Lq2/a;->a:F

    invoke-static {v4}, Lq2/e;->i(Lq2/a;)V

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    iget v6, v0, Lq2/a;->c:F

    const/high16 v1, 0x42700000    # 60.0f

    mul-float v1, v1, v6

    const/high16 v3, 0x447a0000    # 1000.0f

    div-float v3, v1, v3

    iget v4, v0, Lq2/a;->a:F

    iget v1, v0, Lq2/a;->b:F

    iget v0, v0, Lq2/a;->d:F

    const/high16 v5, 0x42180000    # 38.0f

    mul-float v0, v0, v5

    div-float/2addr v0, v2

    add-float v5, v1, v0

    const/high16 v10, 0x3f800000    # 1.0f

    const/high16 v11, 0x3f800000    # 1.0f

    const-string v7, "Contact Developer"

    const/4 v8, 0x1

    const/high16 v9, 0x3f800000    # 1.0f

    invoke-static/range {v3 .. v11}, Lq2/e;->r(FFFFLjava/lang/String;IFFF)Lo0/d;

    :cond_2
    return-void

    :cond_3
    invoke-static {}, Lq2/e;->U()V

    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->i()V

    iget-object v0, p0, Lc2/d;->c:Lc2/e;

    invoke-virtual {v0}, Lc2/e;->a()V

    iget-object v0, p0, Lc2/d;->d:Lc2/b;

    invoke-virtual {v0}, Lc2/b;->a()V

    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->j()V

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0}, Lr2/c;->u()V

    :cond_4
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->g()V

    iget-object v0, p0, Lc2/d;->g:Lo2/a;

    invoke-virtual {v0}, Lo2/a;->g()V

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->e()V

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0}, Lr2/c;->v()V

    invoke-static {}, Lq2/i;->c()V

    iget-object v0, p0, Lc2/d;->j:LX1/c;

    iget-boolean v1, v0, LX1/c;->k:Z

    if-eqz v1, :cond_5

    invoke-virtual {v0}, LX1/c;->h()V

    :cond_5
    return-void
.end method

.method public l()V
    .locals 1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->p0()V

    return-void
.end method

.method public m()V
    .locals 1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->q0()V

    return-void
.end method

.method public o()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x4d8

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public p()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x3b

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public q()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x13

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public r()Z
    .locals 5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x31

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public s(III)V
    .locals 1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-boolean v0, v0, Lc2/c;->t0:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-virtual {v0, p1, p2}, Lq2/a;->c(II)Z

    :cond_0
    iget-object v0, p0, Lc2/d;->j:LX1/c;

    iget-boolean v0, v0, LX1/c;->k:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    if-nez p3, :cond_6

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0, p1, p2}, Lf2/i;->f(II)V

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0, p1, p2}, Lo2/c;->k(II)V

    :cond_3
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->e()Z

    move-result v0

    if-eqz v0, :cond_6

    :cond_4
    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lr2/c;->k()Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-nez v0, :cond_6

    :cond_5
    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0, p1, p2}, Lc2/j;->n(II)V

    iget-object v0, p0, Lc2/d;->d:Lc2/b;

    invoke-virtual {v0, p1, p2}, Lc2/b;->b(II)V

    iget-object v0, p0, Lc2/d;->c:Lc2/e;

    invoke-virtual {v0, p1, p2}, Lc2/e;->c(II)V

    :cond_6
    :goto_0
    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lc2/d;->g:Lo2/a;

    invoke-virtual {v0, p1, p2}, Lo2/a;->i(II)Z

    move-result v0

    if-eqz v0, :cond_7

    return-void

    :cond_7
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_8

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0, p1, p2}, Lo2/c;->j(II)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->e()Z

    move-result v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0, p1, p2, p3}, Lr2/c;->H(III)V

    goto :goto_1

    :cond_8
    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0, p1, p2, p3}, Lr2/c;->H(III)V

    :cond_9
    :goto_1
    return-void
.end method

.method public t(III)V
    .locals 1

    iget-object v0, p0, Lc2/d;->j:LX1/c;

    iget-boolean v0, v0, LX1/c;->k:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-nez p3, :cond_4

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0, p1, p2}, Lf2/i;->g(II)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->e()Z

    move-result v0

    if-eqz v0, :cond_4

    :cond_2
    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lr2/c;->k()Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-nez v0, :cond_4

    :cond_3
    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0, p1, p2}, Lc2/j;->o(II)V

    :cond_4
    :goto_0
    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0, p1, p2}, Lo2/c;->j(II)Z

    :cond_5
    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->e()Z

    move-result v0

    if-eqz v0, :cond_7

    :cond_6
    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0, p1, p2, p3}, Lr2/c;->I(III)V

    :cond_7
    iget-object p3, p0, Lc2/d;->g:Lo2/a;

    invoke-virtual {p3, p1, p2}, Lo2/a;->i(II)Z

    :cond_8
    return-void
.end method

.method public u(III)V
    .locals 1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-boolean v0, v0, Lc2/c;->t0:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lc2/d;->h:Lq2/a;

    invoke-virtual {v0, p1, p2}, Lq2/a;->d(II)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, LW1/b;->s:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->o()V

    :cond_0
    iget-object v0, p0, Lc2/d;->j:LX1/c;

    iget-boolean v0, v0, LX1/c;->k:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-nez p3, :cond_3

    if-eqz v0, :cond_2

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0, p1, p2}, Lf2/i;->h(II)V

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0, p1, p2}, Lc2/j;->p(II)V

    iget-object v0, p0, Lc2/d;->d:Lc2/b;

    invoke-virtual {v0, p1, p2}, Lc2/b;->c(II)V

    iget-object v0, p0, Lc2/d;->c:Lc2/e;

    invoke-virtual {v0, p1, p2}, Lc2/e;->d(II)V

    :goto_0
    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0, p1, p2}, Lo2/c;->l(II)V

    :cond_3
    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0}, Lf2/i;->a()Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lc2/d;->g:Lo2/a;

    invoke-virtual {v0, p1, p2}, Lo2/a;->i(II)Z

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->k0()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0, p1, p2, p3}, Lr2/c;->J(III)V

    :cond_4
    return-void
.end method

.method public v(J)V
    .locals 3

    const-wide/16 v0, 0x0

    cmp-long v2, p1, v0

    if-lez v2, :cond_3

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->M()V

    invoke-static {}, Lw2/f;->A()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0, p1, p2}, Lc2/c;->i0(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lc2/d;->k:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->l()V

    :cond_0
    sget-object v0, LW1/b;->u:LW1/c;

    invoke-interface {v0}, LW1/c;->y()J

    move-result-wide v0

    invoke-static {v0, v1}, Lq2/e;->s0(J)V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->j:LX1/c;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, LX1/c;->m(I)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->a()V

    :cond_1
    iget-object v0, p0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0, p1, p2}, Lc2/j;->q(J)V

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    invoke-virtual {v0, p1, p2}, Lf2/i;->i(J)V

    invoke-static {}, Lw2/f;->A()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lc2/d;->e:Lf2/i;

    iget-object v0, v0, Lf2/i;->j:Lf2/u;

    iget-object v0, v0, Lf2/u;->C:Lq2/p;

    invoke-virtual {v0, p1, p2}, Lq2/p;->r(J)V

    :cond_2
    iget-object v0, p0, Lc2/d;->c:Lc2/e;

    invoke-virtual {v0, p1, p2}, Lc2/e;->e(J)V

    iget-object v0, p0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0, p1, p2}, Lo2/c;->m(J)V

    iget-object v0, p0, Lc2/d;->g:Lo2/a;

    invoke-virtual {v0, p1, p2}, Lo2/a;->j(J)V

    iget-object v0, p0, Lc2/d;->i:Lr2/c;

    invoke-virtual {v0, p1, p2}, Lr2/c;->K(J)V

    invoke-static {p1, p2}, Lq2/i;->f(J)V

    iget-object v0, p0, Lc2/d;->j:LX1/c;

    invoke-virtual {v0, p1, p2}, LX1/c;->t(J)V

    invoke-static {}, Ll2/a;->w()V

    :cond_3
    return-void
.end method

.method public w()V
    .locals 21

    move-object/from16 v0, p0

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->r()J

    move-result-wide v1

    const-wide/16 v3, 0x14

    cmp-long v5, v1, v3

    if-ltz v5, :cond_1

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-wide v2, v1, Lc2/c;->i:J

    const-wide/16 v4, 0x64

    cmp-long v6, v2, v4

    if-ltz v6, :cond_0

    iget-object v7, v0, Lc2/d;->i:Lr2/c;

    iget-object v1, v1, Lc2/c;->H:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    neg-long v8, v1

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->b:Lc2/g;

    iget-object v1, v1, Lc2/g;->a:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v10

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->r()J

    move-result-wide v12

    invoke-virtual/range {v7 .. v13}, Lr2/c;->B(JJJ)V

    goto :goto_0

    :cond_0
    iget-object v14, v0, Lc2/d;->i:Lr2/c;

    iget-object v1, v1, Lc2/c;->H:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v15

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->b:Lc2/g;

    iget-object v1, v1, Lc2/g;->a:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v17

    iget-object v1, v0, Lc2/d;->k:Lc2/c;

    iget-object v1, v1, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->r()J

    move-result-wide v19

    invoke-virtual/range {v14 .. v20}, Lr2/c;->B(JJJ)V

    :cond_1
    :goto_0
    return-void
.end method
